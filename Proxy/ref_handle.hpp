#ifndef REF_HANDLE_HPP
#define REF_HANDLE_HPP

template<typename T>
class ref_handle
{
public:
    ref_handle()
    :pointer(0),ref_counter(new std::size_t(1))
    {
        //pass
    }
    ref_handle(T* t)
    :pointer(t),ref_counter(new std::size_t(1))
    {
        //pass
    }
    ref_handle(const ref_handle& h)
    :pointer(h.pointer),ref_counter(h.ref_counter)
    {
        ++*ref_counter;
    }
    ref_handle& operator=(const ref_handle& rhs)
    {
        ++*rhs.ref_counter;
        if(--*ref_counter == 0)
        {
            delete ref_counter;
            delete pointer;
        }
        ref_counter = rhs.ref_counter;
        pointer = rhs.pointer;
        return *this;
    }
    ~ref_handle()
    {
        if(--*ref_counter==0)
        {
            delete ref_counter;
            delete pointer;
        }
    }
    operator bool() const
    {
        return pointer;
    }
    T& operator*() const
    {
        if(pointer)
        {
            return *pointer;
        }
        throw std::runtime_error("unbound ref_handle");
    }
    T* operator->() const
    {
        if(pointer)
        {
            return pointer;
        }
        throw std::runtime_error("unbound ref_handle");
    }
private:
    T* pointer;
    std::size_t* ref_counter;
};

#endif
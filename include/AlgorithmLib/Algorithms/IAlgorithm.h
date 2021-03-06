//
// Created by Кир on 15.02.2021.
//

#ifndef ALGORITHMSLABTEMPLATE_IALGORITM_H
#define ALGORITHMSLABTEMPLATE_IALGORITM_H

template <typename T>
class IAlgorithm {
public:
    virtual void execute(T* arr, int N) = 0;

    // Additional methods, which called before and after executing main part
    virtual void prepare(int N) {};
    virtual void end() {};
};

template<typename T>
class ISortAlgorithm : public IAlgorithm<T> {
public:
    virtual void sort(T* arr, int N) = 0;
};


#endif //ALGORITHMSLABTEMPLATE_IALGORITM_H

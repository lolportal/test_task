#ifndef SINGLEFIFOPRODUCER_H
#define SINGLEFIFOPRODUCER_H

#include "iclientproducer.h"
#include "iblockingiochannel.h"
#include <ostream>

class SingleFifoProducer : public IClientProducer
{
public:
    SingleFifoProducer(IOPtr input);
    IOPtr wait_for_new_client() override;
private:
    IOPtr m_io;

    SingleFifoProducer(const SingleFifoProducer&) = delete;
    SingleFifoProducer& operator=(const SingleFifoProducer&) = delete;
};

#endif // SINGLEFIFOPRODUCER_H

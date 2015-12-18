/***************************************************************************
 * 
 * Copyright (c) 2015 Baidu.com, Inc. All Rights Reserved
 * 
 **************************************************************************/
 
 
 
/**
 * @file data.h
 * @author liruihao(com@baidu.com)
 * @date 2015/12/16 11:31:00
 * @brief 
 *  
 **/




#ifndef  BROCBUILD_DATA_DATA_H
#define  BROCBUILD_DATA_DATA_H

#include <string>
#include "brocbuild/log/log.h"

class Data
{
    public:
        Data();
        ~Data();
    public:
        std::string _data;
        log _log;
        
};


#endif  //BROCBUILD_DATA_DATA_H


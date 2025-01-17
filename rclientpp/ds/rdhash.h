﻿#ifndef RCPP_RD_HASH_H
#define RCPP_RD_HASH_H

#include "rd.h"
#include <memory>
#include <initializer_list>

NS_1

class RdHash : public Rd
{
public:
	RdHash(std::shared_ptr<RClient> connection);

	int hset(const std::string& key, const std::string& field, const std::string& val);
	std::shared_ptr<RedisValue> hget(const std::string& key, const std::string& field);
	std::shared_ptr<RedisValue> hmget(const std::string& key, std::initializer_list<std::string> fields);

	bool hexists(const std::string& key, const std::string& field);
	int hdel(const std::string& key, const std::string& field);
	int hlen(const std::string& key, const std::string& field = "");


private:

};

NS_2

#endif
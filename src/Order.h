/*
 * Order.h
 *
 *  Created on: 23 avr. 2013
 *      Author: "Paraita Wohler <milkyboi@gmail.com"
 */

#ifndef ORDER_H_
#define ORDER_H_

#include "Types.h"

class Order {

public:

	friend class Agent;
	friend class OrderBook;
	friend class Market;

	Order();
	Order(int asset,
		  int owner,
		  double time,
		  int price,
		  int volume,
		  OrderType o_type,
		  int globalOrderIdentifier);
	virtual ~Order();
	int getUnderlying() ;
	int getIdentifier() ;
	int getOwner() ;
	int getVolume() ;
	int getInitialVolume() ;
	int getPrice() ;
	double getTime() ;
	int getGlobalOrderIdentifier();
	OrderType getType() ;
	void printOrder() ;
	void setPrice (int price) ;
	void setVolume(int a_volume);
	void setType(OrderType a_type);
	void setState(OrderState a_state);
	std::vector<ExecutionHistory> getExecutionHistory();

private:
	int asset;
	int	owner;
	double time;
	int price;
	int	initialVolume;
	int	volume;
	OrderType type;
	OrderState state;
	int	globalOrderIdentifier;
	std::vector<ExecutionHistory> executionHistory;
};


#endif /* ORDER_H_ */

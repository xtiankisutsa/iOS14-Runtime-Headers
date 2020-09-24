/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INRestaurant, NSDateComponents, NSNumber, NSDate;


@protocol INGetAvailableRestaurantReservationBookingsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (assign,nonatomic) unsigned long long partySize; 
@property (nonatomic,copy) NSDateComponents * preferredBookingDateComponents; 
@property (nonatomic,copy) NSNumber * maximumNumberOfResults; 
@property (nonatomic,copy) NSDate * earliestBookingDateForResults; 
@property (nonatomic,copy) NSDate * latestBookingDateForResults; 
@required
-(void)setRestaurant:(id)arg1;
-(NSDate *)earliestBookingDateForResults;
-(void)setPartySize:(unsigned long long)arg1;
-(void)setEarliestBookingDateForResults:(id)arg1;
-(id)init;
-(NSDateComponents *)preferredBookingDateComponents;
-(void)setPreferredBookingDateComponents:(id)arg1;
-(NSDate *)latestBookingDateForResults;
-(void)setLatestBookingDateForResults:(id)arg1;
-(void)setMaximumNumberOfResults:(id)arg1;
-(unsigned long long)partySize;
-(INRestaurant *)restaurant;
-(NSNumber *)maximumNumberOfResults;

@end

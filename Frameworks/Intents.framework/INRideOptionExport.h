/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:13 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSDate, INPriceRange, NSNumber, NSArray, INImage, NSUserActivity;


@protocol INRideOptionExport <NSObject,JSExport>
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSDate * estimatedPickupDate; 
@property (nonatomic,copy) INPriceRange * priceRange; 
@property (nonatomic,copy) NSNumber * usesMeteredFare; 
@property (nonatomic,copy) NSString * disclaimerMessage; 
@property (nonatomic,copy) NSArray * availablePartySizeOptions; 
@property (nonatomic,copy) NSString * availablePartySizeOptionsSelectionPrompt; 
@property (nonatomic,copy) NSString * specialPricing; 
@property (nonatomic,copy) INImage * specialPricingBadgeImage; 
@property (nonatomic,copy) NSArray * fareLineItems; 
@property (nonatomic,retain) NSUserActivity * userActivityForBookingInApplication; 
@required
-(INPriceRange *)priceRange;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(id)arg1;
-(id)init;
-(NSNumber *)usesMeteredFare;
-(void)setUsesMeteredFare:(id)arg1;
-(NSString *)specialPricing;
-(NSString *)disclaimerMessage;
-(void)setDisclaimerMessage:(id)arg1;
-(NSArray *)availablePartySizeOptions;
-(void)setAvailablePartySizeOptions:(id)arg1;
-(NSString *)availablePartySizeOptionsSelectionPrompt;
-(void)setSpecialPricing:(id)arg1;
-(void)setAvailablePartySizeOptionsSelectionPrompt:(id)arg1;
-(INImage *)specialPricingBadgeImage;
-(void)setSpecialPricingBadgeImage:(id)arg1;
-(NSArray *)fareLineItems;
-(void)setFareLineItems:(id)arg1;
-(NSUserActivity *)userActivityForBookingInApplication;
-(void)setUserActivityForBookingInApplication:(id)arg1;
-(void)setName:(id)arg1;
-(void)setPriceRange:(id)arg1;
-(NSString *)name;

@end


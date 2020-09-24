/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:17 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@interface GEOComposedRouteETAUPosition : NSObject {

	SCD_Struct_GE87 _routeCoordinate;
	double _timeSinceLastUpdate;

}

@property (nonatomic,readonly) SCD_Struct_GE87 routeCoordinate;              //@synthesize routeCoordinate=_routeCoordinate - In the implementation block
@property (nonatomic,readonly) double timeSinceLastUpdate;                   //@synthesize timeSinceLastUpdate=_timeSinceLastUpdate - In the implementation block
-(id)initWithComposedRoute:(id)arg1 andUpdateLocation:(id)arg2 offset:(double)arg3 ;
-(long long)compare:(id)arg1 ;
-(double)timeSinceLastUpdate;
-(SCD_Struct_GE87)routeCoordinate;
@end

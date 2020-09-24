/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:44:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ExposureNotificationDaemon.framework/ExposureNotificationDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ExposureNotificationDaemon/ExposureNotificationDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface ENRegionHistory : NSObject <NSSecureCoding> {

	NSMutableArray* _regionHistory;

}

@property (nonatomic,readonly) NSMutableArray * regionHistory;              //@synthesize regionHistory=_regionHistory - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithRegionVisits:(id)arg1 ;
-(id)getRegionVisits;
-(void)addRegionVisit:(id)arg1 ;
-(void)removeRegionVisit:(id)arg1 ;
-(void)removeAllRegionVisits;
-(id)getRegions;
-(NSMutableArray *)regionHistory;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:39:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _ICValueHistoryItem : NSObject <NSSecureCoding> {

	unsigned long long _timestamp;
	id _value;

}

@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) id value;                                  //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)timestamp;
-(id)value;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithValue:(id)arg1 timestamp:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/NearbyInteraction.framework/NearbyInteraction
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NearbyInteraction/NearbyInteraction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface NIDiscoveryToken : NSObject <NSCopying, NSSecureCoding> {

	NSData* _rawToken;

}

@property (retain) NSData * rawToken;              //@synthesize rawToken=_rawToken - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithBytes:(id)arg1 ;
-(id)description;
-(id)descriptionInternal;
-(NSData *)rawToken;
-(void)setRawToken:(NSData *)arg1 ;
@end


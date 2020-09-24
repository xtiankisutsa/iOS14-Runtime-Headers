/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ShazamKit/ShazamKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, AVAudioTime, NSUUID, NSDate;

@interface SHSignature : NSObject <NSSecureCoding, NSCopying> {

	NSData* _dataRepresentation;
	AVAudioTime* _time;
	NSUUID* _ID;
	NSDate* _sessionStartDate;
	NSDate* _signatureStartDate;

}

@property (nonatomic,readonly) NSUUID * ID;                              //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) AVAudioTime * time;                         //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSDate * sessionStartDate;                  //@synthesize sessionStartDate=_sessionStartDate - In the implementation block
@property (nonatomic,retain) NSDate * signatureStartDate;                //@synthesize signatureStartDate=_signatureStartDate - In the implementation block
@property (nonatomic,readonly) double length; 
@property (nonatomic,readonly) NSData * dataRepresentation;              //@synthesize dataRepresentation=_dataRepresentation - In the implementation block
@property (nonatomic,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
+(id)signatureWithDataRepresentation:(id)arg1 error:(id*)arg2 ;
+(id)signatureFromData:(id)arg1 atTime:(id)arg2 error:(id*)arg3 ;
-(NSData *)dataRepresentation;
-(NSUUID *)ID;
-(AVAudioTime *)time;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(void)setTime:(AVAudioTime *)arg1 ;
-(double)length;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)sessionStartDate;
-(void)setSessionStartDate:(NSDate *)arg1 ;
-(id)initWithID:(id)arg1 data:(id)arg2 startTime:(id)arg3 sessionStartDate:(id)arg4 signatureStartDate:(id)arg5 ;
-(NSDate *)signatureStartDate;
-(void)setSignatureStartDate:(NSDate *)arg1 ;
@end

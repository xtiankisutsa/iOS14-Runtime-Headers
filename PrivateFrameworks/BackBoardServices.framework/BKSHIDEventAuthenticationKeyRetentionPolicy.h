/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:21 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface BKSHIDEventAuthenticationKeyRetentionPolicy : NSObject <NSCopying> {

	double _keySigningTimeout;
	double _keyVerificationTimeout;

}

@property (assign,nonatomic) double keySigningTimeout;                   //@synthesize keySigningTimeout=_keySigningTimeout - In the implementation block
@property (assign,nonatomic) double keyVerificationTimeout;              //@synthesize keyVerificationTimeout=_keyVerificationTimeout - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)keySigningTimeout;
-(void)setKeySigningTimeout:(double)arg1 ;
-(double)keyVerificationTimeout;
-(void)setKeyVerificationTimeout:(double)arg1 ;
-(id)init;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:12 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRResponseMessage.h>

@class AKAnisetteData;

@interface TRFetchAnisetteDataResponse : TRResponseMessage {

	AKAnisetteData* _anisetteData;

}

@property (nonatomic,copy) AKAnisetteData * anisetteData;              //@synthesize anisetteData=_anisetteData - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(AKAnisetteData *)anisetteData;
-(void)setAnisetteData:(AKAnisetteData *)arg1 ;
-(id)description;
@end


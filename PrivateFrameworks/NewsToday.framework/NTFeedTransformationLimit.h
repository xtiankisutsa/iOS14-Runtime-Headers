/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:16 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NTFeedTransforming.h>

@class NSString;

@interface NTFeedTransformationLimit : NSObject <NTFeedTransforming> {

	unsigned long long _limit;

}

@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
@end

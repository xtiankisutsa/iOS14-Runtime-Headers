/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:38:14 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Translation/Translation-Structs.h>
#import <Translation/FTPronChoice.h>

@class NSString;

@interface FTMutablePronChoice : FTPronChoice

@property (nonatomic,copy) NSString * pron_sequence; 
@property (assign,nonatomic) float log_weight; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)pron_sequence;
-(void)setPron_sequence:(NSString *)arg1 ;
-(float)log_weight;
-(void)setLog_weight:(float)arg1 ;
@end


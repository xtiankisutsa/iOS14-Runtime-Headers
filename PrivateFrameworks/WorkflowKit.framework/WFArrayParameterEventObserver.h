/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:45:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WFArrayParameterEventObserver <WFParameterEventObserver>
@optional
-(void)arrayParameter:(id)arg1 itemWasAppended:(id)arg2;
-(void)arrayParameter:(id)arg1 itemWasMovedFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
-(void)arrayParameter:(id)arg1 itemWasUpdatedAtIndex:(unsigned long long)arg2 toValue:(id)arg3;
-(void)arrayParameter:(id)arg1 itemWasDeletedAtIndex:(unsigned long long)arg2;
-(void)arrayParameter:(id)arg1 confirmDeletionOfItemAtIndex:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3;

@end

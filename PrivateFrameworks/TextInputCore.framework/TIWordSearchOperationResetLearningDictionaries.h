/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:05 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper;

@interface TIWordSearchOperationResetLearningDictionaries : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;              //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
-(void)perform;
-(id)initWithMecabraWrapper:(id)arg1 ;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
@end


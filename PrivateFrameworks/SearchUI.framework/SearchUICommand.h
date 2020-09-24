/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:35:48 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SearchUICommandEnvironment, SearchUIRowModel;

@interface SearchUICommand : NSObject {

	SearchUICommandEnvironment* _commandEnvironment;
	SearchUIRowModel* _rowModel;

}

@property (nonatomic,retain) SearchUICommandEnvironment * commandEnvironment;              //@synthesize commandEnvironment=_commandEnvironment - In the implementation block
@property (nonatomic,retain) SearchUIRowModel * rowModel;                                  //@synthesize rowModel=_rowModel - In the implementation block
+(id)tapCommandForRowModel:(id)arg1 environment:(id)arg2 ;
+(id)mainRowModelForRowModel:(id)arg1 ;
+(Class)supportedCommandClassForClasses:(id)arg1 rowModel:(id)arg2 environment:(id)arg3 ;
+(id)peekCommandForRowModel:(id)arg1 environment:(id)arg2 ;
+(BOOL)supportsRowModel:(id)arg1 environment:(id)arg2 ;
-(unsigned long long)destination;
-(SearchUIRowModel *)rowModel;
-(void)setRowModel:(SearchUIRowModel *)arg1 ;
-(void)sendResultFeedback;
-(id)generateCardViewControllerForPeek:(BOOL)arg1 ;
-(id)resultEngagementFeedback;
-(SearchUICommandEnvironment *)commandEnvironment;
-(id)cardSectionEngagementFeedback;
-(void)sendCardFeedback;
-(void)sendViewControllerFeedback;
-(id)initWithRowModel:(id)arg1 environment:(id)arg2 ;
-(void)setCommandEnvironment:(SearchUICommandEnvironment *)arg1 ;
-(BOOL)defaultApplicationExistsAndSupportsOpenInPlaceForFileURL:(id)arg1 performOpenIfSo:(BOOL)arg2 ;
-(id)storeViewController;
@end

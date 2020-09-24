/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:59 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _CDLocalContext;
@interface PMMContextHelper : NSObject {

	id<_CDLocalContext> _context;

}

@property (nonatomic,readonly) id<_CDLocalContext> context;              //@synthesize context=_context - In the implementation block
+(id)sharedInstance;
-(void)registerForNotifications:(id)arg1 ;
-(id)init;
-(id)fetchContextValueForKeyPath:(id)arg1 ;
-(id<_CDLocalContext>)context;
-(id)fetchDataDictionaryForKeyPath:(id)arg1 ;
@end

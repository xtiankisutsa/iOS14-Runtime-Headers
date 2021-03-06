/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:00 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface TIStatisticChangeCache : NSObject {

	NSMutableDictionary* _cacheWithoutInputMode;
	NSMutableDictionary* _cacheWithInputMode;

}
+(id)sharedInstance;
-(id)flush;
-(id)init;
-(void)addValue:(int)arg1 toStatisticWithName:(id)arg2 inCache:(id)arg3 ;
-(void)addValue:(int)arg1 toStatisticWithName:(id)arg2 andInputMode:(id)arg3 ;
@end


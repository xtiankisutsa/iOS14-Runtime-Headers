/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:47:11 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable;

@interface SNAudioProcessorCache : NSObject {

	NSMapTable* _activeProcessorsCache;

}
-(id)init;
-(id)sharedProcessorWithConfiguration:(id)arg1 ;
-(id)audioProcessorWithConfiguration:(id)arg1 ;
-(id)createAudioProcessorWithConfiguration:(id)arg1 ;
@end


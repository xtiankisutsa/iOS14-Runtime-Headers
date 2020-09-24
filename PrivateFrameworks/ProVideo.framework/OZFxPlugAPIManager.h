/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:43:54 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/PROAPIAccessing.h>

@class NSMutableDictionary, NSString;

@interface OZFxPlugAPIManager : NSObject <PROAPIAccessing> {

	NSMutableDictionary* _apis;
	PCRecursiveMutex* _mutex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(void)registerAPIObject:(id)arg1 forProtocol:(id)arg2 version:(unsigned)arg3 ;
-(id)apiForProtocol:(id)arg1 ;
-(void)unregisterAPIForProtocol:(id)arg1 ;
@end

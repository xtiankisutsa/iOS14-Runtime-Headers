/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:28 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRProtocolMessage.h>

@class MRClient;

@interface MRSetNowPlayingClientMessage : MRProtocolMessage

@property (nonatomic,readonly) MRClient * client; 
-(unsigned long long)type;
-(MRClient *)client;
-(id)initWithClient:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:40:29 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MRPlayerPath;

@interface MRNowPlayingRequest : NSObject {

	MRPlayerPath* _playerPath;

}

@property (nonatomic,copy,readonly) MRPlayerPath * playerPath;              //@synthesize playerPath=_playerPath - In the implementation block
-(id)initWithOrigin:(id)arg1 ;
-(void)requestLastPlayingDate:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)lastPlayingDateWithError:(id*)arg1 ;
-(MRPlayerPath *)playerPath;
-(id)initWithPlayerPath:(id)arg1 ;
@end

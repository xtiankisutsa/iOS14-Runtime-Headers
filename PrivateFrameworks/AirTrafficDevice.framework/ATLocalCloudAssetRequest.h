/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:37:15 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ATAsset, NSFileHandle;

@interface ATLocalCloudAssetRequest : NSObject {

	ATAsset* _asset;
	NSFileHandle* _fileHandle;
	double _startTime;

}

@property (nonatomic,retain) ATAsset * asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
-(void)setFileHandle:(NSFileHandle *)arg1 ;
-(ATAsset *)asset;
-(NSFileHandle *)fileHandle;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setAsset:(ATAsset *)arg1 ;
@end

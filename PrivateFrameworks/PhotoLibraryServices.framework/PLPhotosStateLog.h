/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:30 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject, PLPhotoLibrary;

@interface PLPhotosStateLog : NSObject {

	NSObject*<OS_dispatch_group> _group;
	PLPhotoLibrary* _photoLibrary;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_group> group;              //@synthesize group=_group - In the implementation block
@property (nonatomic,readonly) PLPhotoLibrary * photoLibrary; 
-(id)initWithPhotoLibrary:(id)arg1 ;
-(PLPhotoLibrary *)photoLibrary;
-(NSObject*<OS_dispatch_group>)group;
-(void)logMoments;
-(void)logAllAlbums;
-(void)logAlbum:(id)arg1 index:(unsigned long long)arg2 indent:(unsigned long long)arg3 completeMetadata:(BOOL)arg4 printAssets:(BOOL)arg5 ;
-(void)logAlbumLists;
-(void)logAssetCounts;
-(void)_logAssets:(id)arg1 forAlbum:(id)arg2 indent:(unsigned long long)arg3 ;
-(void)logDescription:(id)arg1 ;
-(BOOL)compressFileFromPath:(id)arg1 toPath:(id)arg2 ;
-(void)createSnapshot;
-(BOOL)copyFilesMatching:(id)arg1 andExcluding:(id)arg2 fromPath:(id)arg3 toPath:(id)arg4 usingCompression:(BOOL)arg5 ;
@end

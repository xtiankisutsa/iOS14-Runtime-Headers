/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:33 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AVTStickerRecentsPresetsProvider : NSObject
+(void)filteredAndPaddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 avatarStore:(id)arg3 numberOfStickers:(long long)arg4 resultBlock:(/*^block*/id)arg5 ;
+(id)paddedStickerRecordsWithRecents:(id)arg1 paddingMemojiIdentifier:(id)arg2 numberOfStickers:(long long)arg3 ;
+(id)presetsGivenOneMemojiWithIdentifier:(id)arg1 ;
+(id)filteredRecentStickers:(id)arg1 withAvailableRecordIdentifiersMap:(id)arg2 ;
+(id)presetsGivenNoMemoji;
@end

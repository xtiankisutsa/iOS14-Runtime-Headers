/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:46:04 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SFUInputBundle <NSObject>
@required
-(BOOL)hasEntryWithName:(id)arg1;
-(id)inputStreamForEntry:(id)arg1;
-(id)bufferedInputStreamForEntry:(id)arg1;
-(long long)lengthOfEntry:(id)arg1;
-(void)copyEntry:(id)arg1 toFile:(id)arg2;
-(unsigned)crc32ForEntry:(id)arg1;

@end

/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:41:38 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSMutableData.h>

@interface IOBufferMutableData : NSMutableData {

	void* _bytes;
	unsigned long long _length;
	/*^block*/id _deallocator;

}

@property (copy) id deallocator;              //@synthesize deallocator=_deallocator - In the implementation block
-(void)setLength:(unsigned long long)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(const void*)bytes;
-(void)dealloc;
-(void*)mutableBytes;
-(unsigned long long)length;
-(void)setDeallocator:(id)arg1 ;
-(id)deallocator;
@end


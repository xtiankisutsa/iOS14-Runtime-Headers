/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:32 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/IDSKVStore.framework/IDSKVStore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface IDSKVDeleteContext : NSObject {

	char _valueType;
	unsigned long long _rowIDCutoff;

}

@property (assign,nonatomic) unsigned long long rowIDCutoff;              //@synthesize rowIDCutoff=_rowIDCutoff - In the implementation block
@property (assign,nonatomic) char valueType;                              //@synthesize valueType=_valueType - In the implementation block
-(char)valueType;
-(void)setValueType:(char)arg1 ;
-(unsigned long long)rowIDCutoff;
-(void)setRowIDCutoff:(unsigned long long)arg1 ;
@end


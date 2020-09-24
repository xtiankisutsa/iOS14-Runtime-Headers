/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:50:35 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SceneKit/SceneKit-Structs.h>
#import <SceneKit/SCNMTLResourceBinding.h>

@interface SCNMTLPassResourceBinding : SCNMTLResourceBinding {

	SCD_Struct_SC89* _inputs;
	C3DFXPassInputRef _samplerInput;
	long long inputsCount;
	long long bufferSize;

}

@property (assign,nonatomic) long long inputsCount; 
@property (assign,nonatomic) long long bufferSize; 
-(void)dealloc;
-(long long)bufferSize;
-(void)setBufferSize:(long long)arg1 ;
-(id)init;
-(long long)inputsCount;
-(void)setInputsCount:(long long)arg1 ;
@end

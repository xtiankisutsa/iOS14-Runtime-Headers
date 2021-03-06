/*
* This header is generated by classdump-dyld 1.0
* on Thursday, September 24, 2020 at 12:42:39 AM British Summer Time
* Operating System: Version 14.0 (Build 18A373)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaExperience/MediaExperience-Structs.h>
#import <MediaExperience/MXTestSessionFactory.h>

@interface MXTestSessionProperty : MXTestSessionFactory {

	opaqueCMSessionRef mSession;

}
-(int)testClientName;
-(int)testAudioMode;
-(int)verifyClientPriority:(unsigned)arg1 ;
-(int)verifyAudioHWControlFlags:(unsigned)arg1 ;
-(int)verifyInterruptionStyle:(unsigned)arg1 ;
-(int)verifyCategoryCustomization:(unsigned char)arg1 andBuiltInRoute:(CFStringRef)arg2 ;
-(int)verifyOverrideRoute:(unsigned char)arg1 ;
-(int)testReporterIDs;
-(int)verifyAudioCategoryBehavior:(opaqueCMSessionRef)arg1 isMixable:(CFBooleanRef)arg2 postsResumableInterruption:(unsigned char)arg3 isPlayAndRecord:(unsigned char)arg4 withBluetooth:(unsigned char)arg5 andIsDefaultToSpeaker:(unsigned char)arg6 ;
-(int)testIsAudioSession;
-(int)testAudioSessionID;
-(int)testClientPriority;
-(int)testIsFigInstantiatedAudioSession;
-(int)testAudioHardwareControlFlags;
-(int)testInterruptionStyle;
-(int)testAudioCategory;
-(int)testCategoryCustomizationEnableBluetoothRecording;
-(int)testCategoryCustomizationDefaultBuiltInRoute;
-(int)testOverrideRoute;
@end


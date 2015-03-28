//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppleElementsSupport/AppleElementsDevice.h>

@interface AEOpalPlatinumDevice : AppleElementsDevice
{
    unsigned short _sampleRate;
    BOOL _signalTrainingPhase;
    long _adcProfileCount;
    CDStruct_c0c778b7 *_adcProfileSet;
    unsigned char _fixedDigipots[6];
    unsigned char _alternatingDigipots[2][6];
    CDStruct_34fda668 *_currentSummary;
    struct {
        unsigned char _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned short _field4;
        unsigned char _field5;
        unsigned char _field6;
        unsigned char _field7;
        unsigned short _field8;
        unsigned char _field9;
        unsigned char _field10[5];
        unsigned char _field11;
        unsigned char _field12;
    } *_currentHeader;
    unsigned long _delegateMethodMask;
    CDStruct_33cd9eda _stats;
    long _lastFrame;
}

+ (id)AEDeviceForService:(unsigned int)arg1 runLoop:(struct __CFRunLoop *)arg2 runLoopModes:(struct __CFString *)arg3;
+ (id)AEDeviceForDeviceRef:(struct __IOHIDDevice *)arg1 runLoop:(struct __CFRunLoop *)arg2 runLoopModes:(struct __CFString *)arg3;
- (BOOL)setCookie:(unsigned char)arg1;
- (BOOL)getScheduleIndex:(char *)arg1;
- (BOOL)getDigipotSource:(char *)arg1;
- (BOOL)stopInputDataStream;
- (BOOL)startInputDataStream;
- (BOOL)setDigipotSource:(unsigned char)arg1;
- (BOOL)setScheduleIndex:(unsigned char)arg1;
- (BOOL)setSamplingRate:(unsigned short)arg1;
- (void)parseDeviceInputReport:(char *)arg1 reportID:(unsigned int)arg2 reportLength:(long)arg3;
- (CDStruct_33cd9eda)getStats;
- (BOOL)getPowerManagerMode:(int *)arg1;
- (BOOL)setPowerManagerMode:(int)arg1;
- (id)getFirmwareVersion;
- (BOOL)digipotSettingForEmitter:(int)arg1 inSummary:(CDStruct_34fda668 *)arg2 intoValue:(char *)arg3;
- (BOOL)darkValueForEmitter:(int)arg1 withScanner:(int)arg2 inSummary:(CDStruct_34fda668 *)arg3 intoValue:(int *)arg4;
- (BOOL)lightValueForEmitter:(int)arg1 withScanner:(int)arg2 inSummary:(CDStruct_34fda668 *)arg3 intoValue:(int *)arg4;
- (BOOL)getLEDOverride:(char *)arg1 led:(char *)arg2 dpot:(char *)arg3;
- (BOOL)setLEDOverride:(BOOL)arg1 led:(unsigned char)arg2 dpot:(unsigned char)arg3;
- (BOOL)getCookie:(char *)arg1;
- (BOOL)getSysErrors:(CDStruct_f91af18b *)arg1;
- (BOOL)setSysErrors;
- (BOOL)getSamplingRate:(unsigned short *)arg1;
- (BOOL)startInputDataStreamWithDeviceConfig:(CDStruct_de0e5961)arg1;
- (BOOL)getCurrentSchedule:(CDStruct_a8d9026e *)arg1;
- (BOOL)setCustomSchedule:(CDStruct_a8d9026e *)arg1;
- (BOOL)getCustomSchedule:(CDStruct_a8d9026e *)arg1;
- (BOOL)setAGCUpdateRate:(unsigned char)arg1;
- (BOOL)getAGCUpdateRate:(char *)arg1;
- (BOOL)getDigipotCurrentSettings:(unsigned char [6])arg1 source:(char *)arg2;
- (BOOL)getDigipotAlternatingConfiguration:(unsigned char [6])arg1 alternate:(unsigned char [6])arg2;
- (BOOL)setDigipotAlternatingConfiguration:(unsigned char [6])arg1 alternate:(unsigned char [6])arg2;
- (BOOL)getDigipotFixedConfiguration:(unsigned char [6])arg1;
- (BOOL)setDigipotFixedConfiguration:(unsigned char [6])arg1;
- (BOOL)_valueForEmitter:(int)arg1 lightOrDark:(int)arg2 withScanner:(int)arg3 inSummary:(CDStruct_34fda668 *)arg4 intoValue:(int *)arg5;
- (unsigned char)convertHzToScanRate:(unsigned short)arg1;
- (BOOL)_startOrStopInputDataStream:(BOOL)arg1;
- (BOOL)getADCProfiles:(struct **)arg1 profileCount:(int *)arg2;
- (void)resetStats;
- (id)initWithDevice:(struct __IOHIDDevice *)arg1 runLoop:(struct __CFRunLoop *)arg2 runLoopModes:(struct __CFString *)arg3;
- (void)setInputDelegate:(id)arg1;
- (void)dealloc;

@end


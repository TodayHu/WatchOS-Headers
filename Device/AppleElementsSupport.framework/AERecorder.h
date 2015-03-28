//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AppleElementsDevice, NSMutableData, NSObject<OS_dispatch_semaphore>, NSString;

@interface AERecorder : NSObject
{
    int _recordingFileDescriptor;
    long _recordingFullHeaderLength;
    NSString *_pathToFile;
    NSObject<OS_dispatch_semaphore> *_recordingLock;
    BOOL _paused;
    double _firstReportTimestamp;
    double _lastReportTimestamp;
    AppleElementsDevice *_recordedDevice;
    NSMutableData *_recordingBuffer;
    unsigned long long _maxRecordingLengthSeconds;
}

+ (id)recordingNameForDevice:(id)arg1;
- (void)recordDevice:(id)arg1 inputReport:(char *)arg2 reportID:(unsigned int)arg3 reportLength:(unsigned int)arg4;
- (struct __CFData *)devicesHeader;
@property(readonly) NSMutableData *recordingBuffer; // @synthesize recordingBuffer=_recordingBuffer;
@property unsigned long long maxRecordingLengthSeconds; // @synthesize maxRecordingLengthSeconds=_maxRecordingLengthSeconds;
@property(readonly) NSString *recordingName;
- (void)truncateRecordingTo:(double)arg1;
@property __weak AppleElementsDevice *recordedDevice; // @synthesize recordedDevice=_recordedDevice;
- (void).cxx_destruct;
- (id)initWithPath:(id)arg1;
- (void)stopRecording;
- (id)initWithData:(id)arg1;
- (id)init;
- (void)beginRecording;
- (void)resumeRecording;
- (void)pauseRecording;

@end


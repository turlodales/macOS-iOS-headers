//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol _CSVisualizationUnarchiverDelegate;

@interface _CSVisualizationUnarchiver : NSObject
{
    struct __sFILE *_fileHandle;
    unsigned int _closeWhenDone:1;
    unsigned int _finishedReading:1;
    id <_CSVisualizationUnarchiverDelegate> _delegate;
}

+ (id)decodingQueue;
- (void).cxx_destruct;
@property(readonly) __weak id <_CSVisualizationUnarchiverDelegate> delegate; // @synthesize delegate=_delegate;
- (BOOL)postDelegateMessageForDictionary:(id)arg1;
- (id)decodeDictionaryFromData:(id)arg1;
- (void)readAllDataYieldingWithPeriod:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)checkAttributeTypes:(id)arg1;
- (unsigned long long)fread:(void *)arg1 size:(unsigned long long)arg2 numberOfItems:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)readAllUnitsReturningError:(id *)arg1;
- (void)dealloc;
- (id)initForReadingWithFileHandle:(struct __sFILE *)arg1 closeWhenDone:(BOOL)arg2 delegate:(id)arg3 error:(id *)arg4;
- (id)initWithSimulatorDevice:(id)arg1 machServiceName:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (struct __sFILE *)fileHandleToSimDevice:(id)arg1 machServiceName:(id)arg2 error:(id *)arg3;
- (id)initWithDevice:(struct _AMDevice *)arg1 machServiceName:(id)arg2 delegate:(id)arg3 error:(id *)arg4;
- (id)initWithFileHandleToDevice:(struct __sFILE *)arg1 closeWhenDone:(BOOL)arg2 delegate:(id)arg3 error:(id *)arg4;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLDynamicLibrarySPI-Protocol.h>

@class NSArray, NSString;
@protocol MTLDevice, OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface _MTLDynamicLibrary : NSObject <MTLDynamicLibrarySPI>
{
    NSString *_label;
    id <MTLDevice> _device;
    NSObject<OS_dispatch_data> *_binaryData;
    NSArray *_functionNames;
    NSString *_libraryPath;
    NSArray *_linkedLibraries;
    struct LibraryDescriptor *_descriptor;
    CDStruct_41a22ec7 _libraryUUID;
}

@property(readonly) NSObject<OS_dispatch_data> *binaryData; // @synthesize binaryData=_binaryData;
@property(readonly) NSArray *linkedLibraries; // @synthesize linkedLibraries=_linkedLibraries;
@property(readonly) NSString *libraryPath; // @synthesize libraryPath=_libraryPath;
@property(readonly) NSArray *functionNames; // @synthesize functionNames=_functionNames;
@property(readonly) id <MTLDevice> device; // @synthesize device=_device;
@property(copy) NSString *label; // @synthesize label=_label;
- (void)serializeToURL:(id)arg1 error:(id *)arg2;
- (void)writeBinaryDataToURL:(id)arg1 error:(id *)arg2;
- (void)readBinaryDataFromURL:(id)arg1 error:(id *)arg2;
@property(readonly) const CDStruct_41a22ec7 *libraryUUID;
- (void)dealloc;
- (id)initWithURL:(id)arg1 device:(id)arg2 error:(id *)arg3;
- (id)newErrorWithMessage:(id)arg1 errorCode:(unsigned long long)arg2;
- (id)initWithLibrary:(id)arg1 binaryData:(id)arg2 device:(id)arg3 error:(id *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIKernel, NSBundle, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSURL;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CIPlugInStandardFilter : CIFilter
{
    NSMutableDictionary *_inputs;
    NSMutableArray *_inputKeys;
    NSMutableArray *_outputKeys;
    NSMutableDictionary *_attributes;
    CIKernel *_filterKernel;
    NSURL *_kernelFileURL;
    NSBundle *_plugInBundle;
    NSObject<OS_dispatch_source> *kernelChangeSource;
}

+ (BOOL)isDebugging;
@property(readonly, retain, nonatomic) NSURL *kernelFileURL; // @synthesize kernelFileURL=_kernelFileURL;
@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_plugInBundle;
- (id)_provideFilterCopyWithZone:(struct _NSZone *)arg1;
- (id)outputImage;
- (id)attributes;
- (id)outputKeys;
- (id)inputKeys;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(readonly, retain, nonatomic) NSString *kernelFilename;
- (void)finalize;
- (void)dealloc;
- (id)initWithDescription:(id)arg1 kernelFile:(id)arg2 filterBundle:(id)arg3;
- (void)setupWatchingForKernelChanges;
- (void)loadKernel;
- (BOOL)setupInputs;

@end


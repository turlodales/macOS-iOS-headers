//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKDiagnostics : NSObject
{
}

+ (void)saveTransitState:(id)arg1 forPaymentApplication:(id)arg2;
+ (id)_metadataForCardAtURL:(id)arg1;
+ (id)_allPasses;
+ (id)_secureElementData;
+ (id)generateUbiquityDiagnosticsFile:(BOOL)arg1;
+ (void)generateZippedDiagnosticsPackageWithPassLibrary:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)generateDiagnosticsPackageWithPassLibrary:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;

@end


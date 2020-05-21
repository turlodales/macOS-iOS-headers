//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PKPackageSource.h"

@class NSArray;

@interface MSUContentLocatorPackageSource : NSObject <PKPackageSource>
{
    NSArray *_modifiedPackageReferences;
}

+ (id)_modifiedPackageReferencesForPackages:(id)arg1;
+ (CDUnknownFunctionPointerType)_contentLocatorFunction;
+ (void)_setContentLocatorFunction:(CDUnknownFunctionPointerType)arg1;
- (void).cxx_destruct;
@property(retain) NSArray *modifiedPackageReferences; // @synthesize modifiedPackageReferences=_modifiedPackageReferences;
@property(readonly) NSArray *allPackageReferences;
- (id)initWithPackages:(id)arg1;

@end


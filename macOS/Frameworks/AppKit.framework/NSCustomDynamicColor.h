//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSDynamicNamedColor.h>

__attribute__((visibility("hidden")))
@interface NSCustomDynamicColor : NSDynamicNamedColor
{
    CDUnknownBlockType _dynamicProvider;
}

- (void)encodeWithCoder:(id)arg1;
- (Class)classForCoder;
- (BOOL)isEqual:(id)arg1;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)resolvedColor;
- (void)dealloc;
- (id)initWithCatalogName:(id)arg1 colorName:(id)arg2 genericColor:(id)arg3;
- (id)init;
- (id)initWithName:(id)arg1 dynamicProvider:(CDUnknownBlockType)arg2;

@end


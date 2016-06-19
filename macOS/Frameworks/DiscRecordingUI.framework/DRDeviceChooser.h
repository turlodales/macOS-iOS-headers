//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSControl.h"

@interface DRDeviceChooser : NSControl
{
    id filter;
    long long _reserved1;
    long long _reserved2;
    long long _reserved3;
    long long _reserved4;
}

+ (void)initialize;
- (BOOL)isBordered;
- (void)setBordered:(BOOL)arg1;
- (BOOL)_allowsContextMenus;
- (void)moveUp:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)performClick:(id)arg1;
- (void)sizeToFit;
- (BOOL)isFlipped;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)selectDevice:(id)arg1;
- (void)setSelectedDevice:(id)arg1;
- (id)selectedDevice;
- (void)setFilter:(id)arg1;
- (id)filter;
- (id)exposedBindings;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAutounbinder, NSView;

__attribute__((visibility("hidden")))
@interface NSTableCellViewAux : NSObject
{
    NSAutounbinder *autounbinder;
    NSView *contentView;
    unsigned int _doingLayout:1;
    unsigned int _isSourceList:1;
    unsigned int _isLegacySourceList:1;
}

@end


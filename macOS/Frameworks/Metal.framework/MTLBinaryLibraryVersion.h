//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MTLBinaryLibraryVersion : NSObject
{
    unsigned int _driver;
    unsigned int _framework;
}

@property(readonly) unsigned int framework; // @synthesize framework=_framework;
@property(readonly) unsigned int driver; // @synthesize driver=_driver;
- (id)initWithFrameworkVersion:(unsigned int)arg1 driverVersion:(unsigned int)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportInfo : NSObject
{
    id _exportedObject;
    NSXPCInterface *_exportedInterface;
    long long _exportCount;
}

@property long long exportCount; // @synthesize exportCount=_exportCount;
@property(retain) NSXPCInterface *exportedInterface; // @synthesize exportedInterface=_exportedInterface;
@property(retain) id exportedObject; // @synthesize exportedObject=_exportedObject;
- (id)description;
- (void)dealloc;
- (id)init;

@end


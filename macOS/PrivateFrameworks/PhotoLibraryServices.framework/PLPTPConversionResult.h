//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLPTPConversionResult : NSObject
{
    NSString *_pathExtension;
    unsigned long long _estimatedFileLength;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long estimatedFileLength; // @synthesize estimatedFileLength=_estimatedFileLength;
@property(readonly, copy) NSString *pathExtension; // @synthesize pathExtension=_pathExtension;
- (id)initWithPathExtension:(id)arg1 estimatedFileLength:(unsigned long long)arg2;

@end


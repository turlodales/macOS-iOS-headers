//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OfficeImport/TCXmlTextWriterProvider.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface TCMemoryBufferTextWriterProvider : TCXmlTextWriterProvider
{
    NSMutableData *_memoryBuffer;
}

- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSMutableData *memoryBuffer; // @synthesize memoryBuffer=_memoryBuffer;
- (BOOL)setUp;
- (id)initWithMemoryBuffer:(id)arg1;

@end


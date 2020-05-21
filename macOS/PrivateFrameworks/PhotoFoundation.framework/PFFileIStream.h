//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotoFoundation/PFFile.h>

#import "PFIStream.h"
#import "PFStream.h"

@class NSError, NSString;

@interface PFFileIStream : PFFile <PFIStream, PFStream>
{
    struct __sFILE {
        char *_field1;
        int _field2;
        int _field3;
        short _field4;
        short _field5;
        struct __sbuf _field6;
        int _field7;
        void *_field8;
        CDUnknownFunctionPointerType _field9;
        CDUnknownFunctionPointerType _field10;
        CDUnknownFunctionPointerType _field11;
        CDUnknownFunctionPointerType _field12;
        struct __sbuf _field13;
        struct __sFILEX *_field14;
        int _field15;
        unsigned char _field16[3];
        unsigned char _field17[1];
        struct __sbuf _field18;
        int _field19;
        long long _field20;
    } *_file;
    char *_buffer;
    unsigned long long _bufferLength;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)unlock;
- (void)lock;
- (id)getStreamError;
- (const char *)streamData:(unsigned long long *)arg1;
- (BOOL)readStream:(char *)arg1 length:(unsigned long long)arg2 read:(unsigned long long *)arg3;
- (unsigned long long)preferredStreamBlockSize;
- (BOOL)advanceStream:(long long)arg1 distanceMoved:(long long *)arg2;
- (BOOL)advanceStream;
- (BOOL)rewindStream:(long long)arg1;
- (BOOL)rewindStream;
- (long long)streamPosition;
- (long long)streamLength;
- (void)closeStream;
- (BOOL)openStream;
- (BOOL)createDirectoryIfNecessary;
- (void)setError:(id)arg1;
- (void)updateError;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFile:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


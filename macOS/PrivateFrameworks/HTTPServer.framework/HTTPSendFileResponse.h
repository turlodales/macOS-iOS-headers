//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 21 2020 17:01:39).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HTTPServer/HTTPResponse-Protocol.h>

@class HTTPConnection, NSFileHandle, NSString;

@interface HTTPSendFileResponse : NSObject <HTTPResponse>
{
    HTTPConnection *connection;
    NSString *filePath;
    unsigned long long fileLength;
    unsigned long long fileOffset;
    BOOL aborted;
    NSFileHandle *fileHandle;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (id)filePath;
- (BOOL)isDone;
- (id)readHTTPDataOfLength:(unsigned long long)arg1 orLimit:(unsigned long long)arg2;
- (void)setOffset:(unsigned long long)arg1;
- (unsigned long long)offset;
- (unsigned long long)contentLength;
- (BOOL)openFileIfNeeded;
- (BOOL)openFile;
- (void)abort;
- (id)initWithFilePath:(id)arg1 forConnection:(id)arg2;

@end


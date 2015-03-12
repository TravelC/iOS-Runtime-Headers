/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class MTLStencilDescriptor, NSString;

@interface MTLDepthStencilDescriptor : NSObject <NSCopying> {
    struct MTLDepthStencilDescriptorPrivate { 
        MTLStencilDescriptor *frontFaceStencil; 
        MTLStencilDescriptor *backFaceStencil; 
        unsigned int depthCompareFunction; 
        BOOL depthWriteEnabled; 
        NSString *label; 
    } _private;
}

@property(copy) MTLStencilDescriptor * backFaceStencil;
@property unsigned int depthCompareFunction;
@property(getter=isDepthWriteEnabled) BOOL depthWriteEnabled;
@property(copy) MTLStencilDescriptor * frontFaceStencil;
@property(copy) NSString * label;

- (id)backFaceStencil;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)depthCompareFunction;
- (struct MTLDepthStencilDescriptorPrivate { id x1; id x2; unsigned int x3; BOOL x4; id x5; }*)depthStencilPrivate;
- (id)description;
- (id)frontFaceStencil;
- (unsigned int)hash;
- (id)init;
- (BOOL)isDepthWriteEnabled;
- (BOOL)isEqual:(id)arg1;
- (id)label;
- (void)setBackFaceStencil:(id)arg1;
- (void)setDepthCompareFunction:(unsigned int)arg1;
- (void)setDepthWriteEnabled:(BOOL)arg1;
- (void)setFrontFaceStencil:(id)arg1;
- (void)setLabel:(id)arg1;

@end
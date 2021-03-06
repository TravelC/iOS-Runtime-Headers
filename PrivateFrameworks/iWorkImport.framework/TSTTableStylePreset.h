/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, TSTTableStyleNetwork;

@interface TSTTableStylePreset : TSPObject <TSSPreset, TSSStyleClient, TSKModel> {
    unsigned int mPresetID;
    TSTTableStyleNetwork *mStyleNetwork;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property unsigned int presetID;
@property(readonly) NSString * presetKind;
@property(copy) TSTTableStyleNetwork * styleNetwork;
@property(readonly) Class superclass;

- (void)dealloc;
- (void)drawSwatchInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 inContext:(struct CGContext { }*)arg2;
- (unsigned int)hash;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithStyleNetwork:(id)arg1 presetID:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isThemeEquivalent:(id)arg1;
- (id)p_documentRoot;
- (unsigned int)presetID;
- (id)presetKind;
- (id)referencedStyles;
- (void)replaceReferencedStylesUsingBlock:(id)arg1;
- (void)saveToArchive:(struct TableStylePresetArchive { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct Reference {} *x3; struct Reference {} *x4; int x5; int x6; unsigned int x7[1]; }*)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setPresetID:(unsigned int)arg1;
- (void)setStyleNetwork:(id)arg1;
- (id)styleNetwork;
- (id)styleNetworkInStylesheet:(id)arg1;
- (id)swatchImage;

@end

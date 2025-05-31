AnimFSM = {
    current = "Idle",
    
    Update = function(self, dt)
        -- self.current = "Contents/Fbx/Capoeira.fbx"

        self.current = "Contents/Human/NarutoRun"
        self.current = "Contents/Bowser/Bowser/Armature.001|bowser_landing"
        self.current = "Contents/Player_3TTook/Armature|Head_Hit"

        return {
            anim = self.current,
            blend = 1.0
        }
    end
}

return AnimFSM